#ifndef THREADSAFESTRUCTURES_THREADSAFE_STACK_H
#define THREADSAFESTRUCTURES_THREADSAFE_STACK_H

#include <exception>
#include <memory>
#include <mutex>
#include <stack>


// C++ Concurrency in Action Anthony Williams


// std::lock_guard<T> - works faster than std::unique_lock because of having additional flag inside of it
// automatically lock and unlock mutex
// std::unique_lock<T> - let lock and unlock optionally for more flexible using, also have a destructor that
// destroys object after going out of scope
// both function need to be declared methods lock(), unlock(),try_lock()


// Use shared_mutex when need access for many reading threads and exact writing thread
// std::shared_mutex
// std::shared_lock<T>
// also needs to be declared methods lock(),unlock(),try_lock()

struct empty_stack: std::exception
{
    const char* what() const throw();
};


template<typename T>
class threadsafe_stack
{
private:
    std::stack<T> data;
    mutable std::mutex m;
public:
    threadsafe_stack() : data(), m(){}

    threadsafe_stack(const threadsafe_stack& other)
    {
        std::lock_guard<std::mutex> lock(other.m);
        data=other.data;
    }

    threadsafe_stack& operator=(const threadsafe_stack&) = delete;

    void push(T new_value)
    {
        std::lock_guard<std::mutex> lock(m);
        data.push(new_value);
    }
    std::shared_ptr<T> pop()
    {
        std::lock_guard<std::mutex> lock(m);
        if(data.empty()) throw empty_stack();
        std::shared_ptr<T> const res(std::make_shared<T>(data.top()));
        data.pop();
        return res;
    }
    void pop(T& value)
    {
        std::lock_guard<std::mutex> lock(m);
        if(data.empty()) throw empty_stack();
        value=data.top();
        data.pop();
    }
    bool empty() const
    {
        std::lock_guard<std::mutex> lock(m);
        return data.empty();
    }
};

#endif //THREADSAFESTRUCTURES_THREADSAFE_STACK_H

#include <iostream>

template<class T>
class unique_ptr {
public:
    unique_ptr() : ptr_(nullptr) {

    }

    explicit unique_ptr(T *ptr) : ptr_(ptr) {

    }

    unique_ptr(const T &ptr) = delete;

    unique_ptr &operator=(const unique_ptr &object) = delete;

    unique_ptr(unique_ptr &&object) noexcept {
        this->ptr_ = object.ptr_;
        object.ptr_ = nullptr;
    }

    unique_ptr &operator=(unique_ptr &&object) noexcept {
        delete ptr_;
        this->ptr_ = object.ptr_;
        object.ptr_ = nullptr;
    }

    ~unique_ptr() {
        delete ptr_;
    }

    void clear() {
        delete ptr_;
    }

    T* get() const noexcept{
      return ptr_;
    }

    T& operator*() const noexcept{
        return *ptr_;
    }

    T* operator->() const noexcept{
        return ptr_;
    }
private:
    T *ptr_;
};


int main() {

}

#include <iostream>


template<class T>
class shared_ptr {
public:
    shared_ptr() : ptr_(nullptr), ref_counter(new uint32_t(0)) {
    }

    shared_ptr(T *ptr) : ptr_(ptr), ref_counter(new uint32_t(1)) {
    }

    shared_ptr(const shared_ptr &object) {
        if (object.ptr_ != nullptr) {
            ++(*object.ref_counter);
        }
        this->ref_counter = object.ref_counter;
        this->ptr_ = object.ptr_;
    }
    shared_ptr& operator=(const shared_ptr & object){
        clear();
        if(object.ptr_ != nullptr){
            ++(*object.ref_counter);
        }
        this->ref_counter = object.ref_counter;
        this->ptr_ = object.ptr_;
    }

    shared_ptr(shared_ptr && object) noexcept{
        this->ptr_ = object.ptr_;
        this->ref_counter = object.ref_counter;
        object.ptr_ = object.ref_counter = nullptr;
    }

    shared_ptr& operator=(shared_ptr && object) noexcept{
        clear();
        this->ptr_ = object.ptr_;
        this->ref_counter = object.ref_counter;
        object.ptr_ = object.ref_counter = nullptr;
    }

    ~shared_ptr(){
        clear();
    }

    uint32_t get_counter() const{
        return *ref_counter;
    }

    T* get() const{
        return ptr_;
    }

    T& operator*() const{
        return *ptr_;
    }

    T* operator->() const{
        this->ptr_;
    }

private:
    void clear(){
        --(*ref_counter);
        if(*ref_counter == 0){
            delete ptr_;
            delete ref_counter;
        }
    }
private:
    T *ptr_;
    uint32_t *ref_counter;
};

int main() {
    shared_ptr<int> ptr_ = new int(10);
    shared_ptr<int> second_ptr = ptr_;
    std::cout << second_ptr.get_counter() << " " << *second_ptr;
}

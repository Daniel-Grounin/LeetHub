class Foo {

private:
    mutex mtx;
    condition_variable cv;
    int step;

public:
    Foo(){
        step = 0;
    }

    void first(function<void()> printFirst) {
        // Lock mutex and print "first"
        unique_lock<mutex> lock(mtx);
        printFirst();
        step = 1;
        // Notify all threads waiting on the condition variable
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
         unique_lock<mutex> lock(mtx);
        // Wait until step == 1 (first() has been executed)
        cv.wait(lock, [this] { return step == 1; });
        printSecond();
        step = 2;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
         unique_lock<mutex> lock(mtx);
        // Wait until step == 2 (second() has been executed)
        cv.wait(lock, [this] { return step == 2; });
        printThird();
    }
};
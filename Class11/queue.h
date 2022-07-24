const int max_items = 5;

template <class T>
class queue
{
private:
    int rear;
    T arr[max_items];

public:
    queue();
    bool isEmpty();
    void enqueue(T);
    T dequeue();
    T front();
};

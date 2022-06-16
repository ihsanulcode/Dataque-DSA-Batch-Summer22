template <class ItemType>
class dynarr
{
private:
    ItemType *arr;
    int size;

public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void setValue(int, ItemType);
    ItemType getValue(int);
};

class DynamicArray {
public:
    int* arr;
    int size = 0;
    int capacity = 0;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) 
    {
        if(size == capacity)
        {
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        return arr[--size];
    }

    void resize() 
    {
        capacity *= 2;
        int* exArr = new int[capacity];
        for(int i = 0; i < size; i++)
        {
            exArr[i] = arr[i];
        }
        delete[] arr;
        arr = exArr;

    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};

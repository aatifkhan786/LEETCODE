class MinStack {
public:
    int* arr;
    int* minArr;
    int size;
    int topIndex;

    MinStack() {
        size = 30001;
        arr = new int[size];
        minArr = new int[size];
        topIndex = -1;
    }

    void push(int value) {
        topIndex++;
        arr[topIndex] = value;

        if (topIndex == 0)
            minArr[topIndex] = value;
        else
            minArr[topIndex] = min(value, minArr[topIndex - 1]);
    }

    void pop() {
        topIndex--;
    }

    int top() {
        return arr[topIndex];
    }

    int getMin() {
        return minArr[topIndex];
    }
};
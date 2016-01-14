#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

class MedianFinder {
public:

    // Adds a number into the data structure.
	// 为了使数据流能平分到两个堆
	// 这里规定最大值堆的大小必须等于最小值堆或比最小值堆大1
	// 否则，新入的数据插入最大值堆中
    void addNum(int num) {
        maxHeap.push(num);
		int t = maxHeap.top();
		maxHeap.pop();
		minHeap.push(t);
		int m = maxHeap.size(), n = minHeap.size();
		if (m < n)
		{
			int back = minHeap.top();
			minHeap.pop();
			maxHeap.push(back);
		}
    }

    // Returns the median of current data stream
    double findMedian() {
        int m = maxHeap.size(), n = minHeap.size();
		if (m == 0 && n == 0) return 0.0;
		else if (m == n) return (maxHeap.top() + minHeap.top()) / 2.0;
		else return (m < n) ? minHeap.top() : maxHeap.top();
    }

private:
	priority_queue<int, vector<int>, greater<int>> minHeap; // 数据越小，优先级越高
	priority_queue<int, vector<int>, less<int>> maxHeap; // 数据越大，优先级越高
};

// Your MedianFinder object will be instantiated and called as such:
// MedianFinder mf;
// mf.addNum(1);
// mf.findMedian();

class MedianFinder {
private: 
    priority_queue<int,std::vector<int>, std::greater<int>> q1;//top is the smallest
    priority_queue<int> q2;//top is the greatest
public:

    // Adds a number into the data structure.
    void addNum(int num) {//keep q2.size()>=q1.size()
        if(q2.empty()){
            q2.push(num);
            return;
        }
        if(num<=q2.top()){
            if(q2.size()<=q1.size()) q2.push(num);
            else{
                q1.push(q2.top());
                q2.pop();
                q2.push(num);
            }
        } 
        else{
            if(q2.size()<=q1.size()){
                if(num<=q1.top()) q2.push(num);
                else{
                    q2.push(q1.top());
                    q1.pop();
                    q1.push(num);
                }
            }
            else{
                q1.push(num);
            }
        }
    }

    // Returns the median of current data stream
    double findMedian() {
        if(q1.size()==q2.size()) return (q1.top()+q2.top())/2.0;
        return double(q2.top());
    }
};
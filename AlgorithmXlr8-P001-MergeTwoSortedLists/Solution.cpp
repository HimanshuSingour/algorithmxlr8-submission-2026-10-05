#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* buildList(const vector<int>& values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int value : values) {
        ListNode* node = new ListNode(value);

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return head;
}

ListNode* mergeLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}

int main() {
    int n1;
    cin >> n1;

    vector<int> values1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> values1[i];
    }

    int n2;
    cin >> n2;

    vector<int> values2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> values2[i];
    }

    ListNode* list1 = buildList(values1);
    ListNode* list2 = buildList(values2);

    ListNode* merged = mergeLists(list1, list2);

    if (merged == nullptr) {
        cout << "(empty)";
        return 0;
    }

    while (merged != nullptr) {
        cout << merged->val;

        if (merged->next != nullptr) {
            cout << " ";
        }

        merged = merged->next;
    }

    return 0;
}
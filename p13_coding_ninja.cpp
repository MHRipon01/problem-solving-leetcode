// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?count=25&page=1&search=insert%20an%20element%20at%20its&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION&customSource=studio_nav

#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> newSt;
    while (!myStack.empty())
    {
        newSt.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while (!newSt.empty())
    {
        myStack.push(newSt.top());
        newSt.pop();
    }

    return myStack;
}

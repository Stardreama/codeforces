#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *removeNthFromEnd(struct ListNode *head, int n) // 链表删除节点
{
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    struct ListNode *prev = NULL;

    // 将快指针移动到第n个节点
    for (int i = 0; i < n; ++i)
    {
        if (fast == NULL)
        {
            // 处理链表长度小于n的情况
            return head;
        }
        fast = fast->next;
    }

    // 同时移动快指针和慢指针，直到快指针到达链表末尾
    while (fast != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    // 删除倒数第n个节点
    if (prev == NULL)
    {
        // 处理删除头节点的情况
        head = slow->next;
    }
    else
    {
        prev->next = slow->next;
    }

    free(slow);

    return head;
}
struct ListNode *reverseList(struct ListNode *head)
{ // 反转链表
    // 保存cur的下一个结点
    struct ListNode *temp;
    // pre指针指向前一个当前结点的前一个结点
    struct ListNode *pre = NULL;
    // 用head代替cur，也可以再定义一个cur结点指向head。
    while (head)
    {
        temp = head->next;
        head->next = pre;
        pre = head;
        head = temp;
    }
    return pre;
}
// struct ListNode *temp1 = NULL, *temp2 = head;
// while (head != NULL)
// {
//     temp2 = head->next;
//     head->next = temp1;
//     temp1 = head;
//     head = temp2;
//     i++;
// }
//增加节点，头节点为空
struct ListNode*creat(){
    struct ListNode*p=NULL;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    return p;
}
void add_to_list(struct ListNode*dummyhead,int val){
    struct ListNode*p=creat();
    p->next=dummyhead->next;
    p->val=val;
    dummyhead->next=p;
}
void list(struct ListNode*dummyhead){
    struct ListNode*p=creat();
    p=dummyhead->next;
    while(p!=NULL){
        printf("%d->",p->val);
        p=p->next;
    }
    printf("NULL\n");
}
bool del_node(struct ListNode*dummyhead,int val){
    struct ListNode*p=dummyhead;
    struct ListNode*temp=dummyhead;
    p=p->next;
    while(p!=NULL){
        if(p->val==val){
            temp->next=p->next;
            free(p);
            return true;
        }
        else{
            temp=p;
            p=p->next;
        }
    }
    return false;
}
bool modify(struct ListNode*dummyhead,int val,int val2){
    struct ListNode*p=dummyhead;
    p=p->next;
    while(p!=NULL){
        if(p->val==val){
            p->val=val2;
            return true;
        }
        else{
            p=p->next;
        }
    }
    return false;
}
struct ListNode*search(struct ListNode*dummyhead,int val){
    struct ListNode*p=dummyhead;
    p=p->next;
    while(p!=NULL){
        if(p->val==val){
            return p;
        }
        else{
            p=p->next;
        }
    }
    return NULL;
}
int main(){
    struct ListNode*dummyhead=NULL;
    dummyhead=creat();
    dummyhead->next=NULL;
    dummyhead->val=-1;
    int t,i,val,val2;
    printf("请输入要添加的个数\n");
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&val);
        add_to_list(dummyhead,val);
    }
    printf("添加后的链表\n");
    list(dummyhead);
    printf("请输入要删除节点的值\n");
    scanf("%d",&val);
    if(del_node(dummyhead,val)){
        printf("删除元素后的链表\n");
        list(dummyhead);
    }
    else{
        printf("要删除的元素不存在\n");
    }
    printf("请输入要改变节点的值与改变后的值\n");
    scanf("%d%d",&val,&val2);
    if(modify(dummyhead,val,val2)){
        printf("修改后的链表为\n");
        list(dummyhead);
    }
    else{
        printf("要修改的值不存在\n");
    }
    printf("请输入要查找的节点的值\n");
    scanf("%d",&val);
    if(search(dummyhead,val)!=NULL){
        printf("该节点的值为%d\n",search(dummyhead,val)->val);
        list(dummyhead);
    }
    else{
        printf("要查找的节点不存在\n");
    }
    return 0;
}

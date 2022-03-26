//此代码来源于网络
//因为之前代码拿了WA，有点奇怪所谓的字典序到底有没有排
//测试一下这个数据的排列答案是否正确？！
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct Tree {
  char name[265];
  int num;
  struct Tree *zm;
  struct Tree *zw;
  struct Tree *xw;
  struct Tree *xm;
};
struct node {
  char name[265];
  int flag;
};
queue<node> q1;
queue<Tree *> q2;
char s[265], ss[265];
int len[10005];

struct Tree *create(struct Tree *T) {
  struct node a;
  struct Tree *Tt, *t, *q, *p;
  Tt = T;
  q2.push(Tt);
  while (!q1.empty()) {
    t = q2.front();
    a = q1.front();
    q1.pop();
    q2.pop();
    if (a.flag == 1) {
      if (t->zm == NULL) {
        t->zm = (struct Tree *)malloc(sizeof(struct Tree));
        strcpy(t->zm->name, a.name);
        t->zm->num = t->num + 2;
        t->zm->xm = t->zm->xw = t->zm->zm = t->zm->zw = NULL;
        q2.push(t->zm);
      } else {
        q = (struct Tree *)malloc(sizeof(struct Tree));
        strcpy(q->name, a.name);
        q->num = t->num + 2;
        q->xm = q->xw = q->zm = q->zw = NULL;
        p = t->zm;
        while (p) {
          if (strcmp(t->zm->name, q->name) > 0) {
            q->xm = t->zm;
            t->zm = q;
            break;
          } else if (p->xm == NULL && strcmp(p->name, q->name) < 0) {
            p->xm = q;
            break;
          } else if (strcmp(p->name, q->name) < 0 &&
                     strcmp(p->xm->name, q->name) > 0) {
            q->xm = p->xm;
            p->xm = q;
            break;
          } else if (strcmp(p->name, q->name) == 0) {
            q = p;
            break;
          }
          p = p->xm;
        }
        q2.push(q);
      }
    }
    if (a.flag == 2) {
      if (t->zw == NULL) {
        t->zw = (struct Tree *)malloc(sizeof(struct Tree));
        strcpy(t->zw->name, a.name);
        t->zw->num = t->num + 2;
        t->zw->xm = t->zw->xw = t->zw->zm = t->zw->zw = NULL;
        q2.push(t->zw);
      } else {
        q = (struct Tree *)malloc(sizeof(struct Tree));
        strcpy(q->name, a.name);
        q->num = t->num + 2;
        q->xm = q->xw = q->zm = q->zw = NULL;
        p = t->zw;
        while (p) {
          if (strcmp(t->zw->name, q->name) > 0) {
            q->xw = t->zw;
            t->zw = q;
            break;
          } else if (p->xw == NULL && strcmp(p->name, q->name) < 0) {
            p->xw = q;
            break;
          } else if (strcmp(p->name, q->name) < 0 &&
                     strcmp(p->xw->name, q->name) > 0) {
            q->xw = p->xw;
            p->xw = q;
            break;
          } else if (strcmp(p->name, q->name) == 0) {
            q = p;
            break;
          }
          p = p->xw;
        }
        q2.push(q);
      }
    }
  }
  q2.pop();
  return Tt;
}
void output(struct Tree *T) {
  for (int i = 0; i < T->num; i++) {
    printf(" ");
  }
  printf("%s\n", T->name);
  if (T->zm) output(T->zm);
  if (T->zw) output(T->zw);
  if (T->xw) output(T->xw);
  if (T->xm) output(T->xm);
}
int main() {
  struct Tree *T;
  struct node ni;
  T = (struct Tree *)malloc(sizeof(struct Tree));
  char *p = "root";
  strcpy(T->name, p);
  T->num = 0;
  T->xm = T->xw = T->zm = T->zw = NULL;
  int n, i, j, k = 0;
  scanf("%d", &n);
  getchar();
  for (i = 0; i < n; i++) {
    gets(s);
    len[i] = strlen(s);
    for (j = 0; j <= len[i]; j++) {
      if (s[j] != '\\' && s[j] != '\0') {
        ss[k++] = s[j];
        continue;
      }
      if (s[j] == '\\') {
        ni.flag = 1;
        strcpy(ni.name, ss);
        q1.push(ni);
        if (j == len[i] - 1) {
          T = create(T);
          k = 0;
          memset(ss, 0, sizeof(ss));
          break;
        } else {
          k = 0;
          memset(ss, 0, sizeof(ss));
          continue;
        }
      } else {
        ni.flag = 2;
        strcpy(ni.name, ss);
        q1.push(ni);
        T = create(T);
      }
      k = 0;
      memset(ss, 0, sizeof(ss));
    }
  }
  output(T);
}
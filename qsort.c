#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define DATA_SIZE 5
#define letter_length 10
#define NAME_MAX 65
#define NAME_MIN 90
#define SCORE_MAX 100
#define SCORE_MIN 1
#define RANd_MAX 2147483647
#define User_number 5
char a[2]=  {'A',0};
char b[2] = {'B',0};
char c[2] = {'C',0};
char d[2] = {'D',0};
char e[2] = {'E',0};
char f[2] = {'F',0};
char g[2] = {'G',0};
char h[2] = {'H',0};
char i[2] = {'I',0};
char j[2] = {'J',0};
typedef struct _data data;

struct _data {
    char x;
    int y;
};


#define container_of(ptr, type, member)                            \
    ((type *) ((char *) (ptr) -offsetof(type, member)))

#define list_entry(node, type, member) container_of(node, type, member)

typedef struct __list * list_t;
typedef struct __list {
    list_t next;
} node_t;

typedef struct __ele {
    int32_t const val;
    list_t const list;
} ele_t;

static const ele_t Nil = {.val = 0, .list = &(node_t){ .next = NULL }};

typedef void *const CPS_Result;
typedef void (*MakeListCallback)(ele_t *e, CPS_Result res);
void make_list(uint32_t const arr_size,
               int32_t const array[],
               ele_t *e,
               MakeListCallback const cb,
               CPS_Result res);

void mergesort_toarray(ele_t *e, CPS_Result res);

/* Merge sort */
void mergesort(ele_t **source);
void partition(ele_t *head, ele_t **front, ele_t **back);
ele_t *mergeLists(ele_t *a, ele_t *b);

typedef void (*VoidMappable)(int32_t const val);
void void_map_array(VoidMappable const cb,
                    uint32_t const size,
                    int32_t const *const arr);

void list2array(ele_t *e, CPS_Result res);

static void print_val(int32_t const val) { printf("%d ", val); }

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
int cmp_data(const void *a, const void *b)
{
    return (((data *) a)->y > ((data *) b)->y) ? 1 : -1;
}
void print_data(data *arr, size_t count)
{
    for (int i = 0; i < count; i++)
        printf("x=%c, y=%d\n", (arr + i)->x, (arr + i)->y);
}
void print2_data(data *arr, size_t count)
{
    for (int i = 0; i < count; i++)
        printf("x=%c\n", (arr + i)->x);
}




void print1_data(data *arr, size_t count)
{
    FILE *fp1;
    fp1=fopen("123.txt","a");
    if(fp1!=NULL){
    for (int i = 0; i < count; i++){
        printf("x=%c, y=%d\n", (arr + i)->x, (arr + i)->y);
        fprintf(fp1,"%c   %d\n",(arr+i)->x,(arr+i)->y);
     }
      fclose(fp1);
    }
    else 
     printf("open file error\n");
}

int main(int argc, char const *argv[])
{
    srand(time(NULL)); 
    data user1[DATA_SIZE];
    data user2[DATA_SIZE];
    data user3[DATA_SIZE];
    data user4[DATA_SIZE];
    data user5[DATA_SIZE];

    data receive_letterA;
    data receive_letterB;
    data receive_letterC;
    data receive_letterD;
    data receive_letterE;
    data receive_letterF;
    data receive_letterG;
    data receive_letterH;
    data receive_letterI;
    data receive_letterJ;
    data receive_letter[10];

   data *ptr[User_number] = {user1,user2,user3,user4,user5};
   
  for(int a=0;a<User_number;a++){
    for(int i = 0; i < DATA_SIZE; i++) {
      
        ptr[a][i].x = rand()%10;  //只產生A~J的字母
        ptr[a][i].x += 'A';
       // s[i].y = (SCORE_MAX - SCORE_MIN) * rand()/2147000000+1; bug在這裡！！  如果是/的話 會造成rand只有輸出+號後面的數字 出來會是都為1
    for(int j=0;j<i;j++)
    {
      if(ptr[a][i].x==ptr[a][j].x)
      {
      i--;
      break;
      } 
    }
    
  }
 
}   
int n=0;
int points = 5;

 for(int k=0;k<User_number;k++)
  {
      printf("\nthe user%d choice\n",k+1);
    print2_data(ptr[k],DATA_SIZE);
    
  }
  for(int p=0;p<User_number;p++)
  {
      
   for(n=0;n<DATA_SIZE;n++){
   if(ptr[p][n].x=='A')
   {
     receive_letter[0].x = 'A';
     receive_letterA.y = receive_letterA.y+points;
       a[1]=a[1]+points;
   }
    else if(ptr[p][n].x=='B')
   {
     receive_letter[1].x  = 'B';
     receive_letterB.y =  receive_letterB.y+points;   
   b[1]=b[1]+points;
   }
    else if(ptr[p][n].x=='C')
   {
     receive_letter[2].x = 'C';
    receive_letterC.y = receive_letterC.y+points;  
   c[1]=c[1]+points;
   }
    else if(ptr[p][n].x=='D')
   {
   receive_letter[3].x = 'D';
   receive_letterD.y =  receive_letterD.y+points;     
   d[1]=d[1]+points;
   }
    else if(ptr[p][n].x=='E')
   {
    receive_letter[4].x = 'E';
    receive_letterE.y = receive_letterE.y+points;     
   e[1]=e[1]+points;
   }
   else if(ptr[p][n].x=='F')
   {
    receive_letter[5].x = 'F';
    receive_letterF.y = receive_letterF.y+points;  
   f[1]=f[1]+points;
   }
   else if(ptr[p][n].x=='G')
   {
   receive_letter[6].x = 'G';
   receive_letterG.y =receive_letterG.y+points;  
   g[1]=g[1]+points;
   }
   else if(ptr[p][n].x=='H')
   {
    receive_letter[7].x = 'H';
    receive_letterH.y = receive_letterH.y+points;     
   h[1]=h[1]+points;
   }
   else if(ptr[p][n].x=='I')
   {
    receive_letter[8].x = 'I';
    receive_letterI.y = receive_letterI.y+points;     
   i[1]=i[1]+points;
   }
   else if(ptr[p][n].x=='J')
   {
   receive_letter[9].x = 'J';
    receive_letterJ.y = receive_letterJ.y+points;     
   j[1]=j[1]+points;
   }
    points--;
  }
    points =5;
  }
   


   int32_t arr[]= { (int)a[1],(int)b[1],(int)c[1],(int)d[1],(int)e[1],(int)f[1],(int)g[1],(int)h[1],(int)i[1],(int)j[1]};
uint32_t const arr_size = ARRAY_SIZE(arr);

    int32_t res[arr_size];
    make_list(arr_size, arr, (ele_t *)(&Nil), mergesort_toarray, res);

    void_map_array(print_val, arr_size, res);
    int32_t *res_ptr = res;
    int a_same=0;
    int b_same=0;
    int c_same=0;
    int d_same=0;
    int e_same=0;
    int f_same=0;
    int g_same=0;
    int h_same=0;
    int i_same=0;
    int j_same=0;

    for(int z = 0;z<=arr_size;z++)
    {
     if ((*res_ptr)==c[1]&&c_same!=1)
     {
         c_same=1;
         receive_letter[2].y=c[1];
        printf("\nthe letter  at %d th place is %c\n",-(z-10),c[0]);  
           
     }
     else  if((*res_ptr)==b[1]&&b_same!=1){
          b_same=1;
          receive_letter[1].y=b[1];
      printf("\nthe letter  at %d th place is %c\n",-(z-10),b[0]); 
      
     }
      else if((*res_ptr)==a[1]&&a_same!=1){
           receive_letter[0].y=a[1];
           a_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),a[0]); 
      }
      else if((*res_ptr)==d[1]&&d_same!=1){
           receive_letter[3].y=d[1];
           d_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),d[0]); 
      }
       else if((*res_ptr)==e[1]&&e_same!=1){
            receive_letter[4].y=e[1];
            e_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),e[0]); 
      }
       else if((*res_ptr)==f[1]&&f_same!=1){
            receive_letter[5].y=f[1];
            f_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),f[0]); 
      }
       else if((*res_ptr)==g[1]&&g_same!=1){
            receive_letter[6].y=g[1];
            g_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),g[0]); 
      }
       else if((*res_ptr)==h[1]&&h_same!=1){
            receive_letter[7].y=h[1];
            h_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),h[0]); 
      }
       else if((*res_ptr)==i[1]&&i_same!=1){
            receive_letter[8].y=i[1];
            i_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),i[0]); 
      }
      else if((*res_ptr)==j[1]&&j_same!=1){
           receive_letter[9].y=j[1];
           j_same=1;
     printf("\nthe letter  at %d th place is %c\n",-(z-10),j[0]); 
      }


      else 
      printf("done\n");
      res_ptr++;
    }   
     qsort(receive_letter, letter_length, sizeof(receive_letter[0]), cmp_data);
     print1_data(receive_letter,letter_length);
     printf("\n");
    
    return 0;
}

void make_list(uint32_t const arr_size,
               int32_t const arr[],
               ele_t *e,
               MakeListCallback const cb,
               CPS_Result res) {
    if (!arr_size) {
        cb(e, res);
        return;
    }

    make_list(arr_size - 1, arr,
              &(ele_t){
                   .val = arr[arr_size - 1],
                   .list = &(node_t){ .next = (list_t)(&(e->list)) } 
              }, 
              cb, res);
}

void list2array(ele_t *e, CPS_Result res) {
    if (e->list->next == NULL) {
        return;
    }
    int32_t *array = res;
    array[0] = e->val;
    list2array(list_entry(e->list->next, ele_t, list), array + 1);
}

void mergesort_toarray(ele_t *e, CPS_Result res) {
    if (e->list->next != NULL)
        mergesort(&e);
    list2array(e, res);
}

void void_map_array(VoidMappable const cb,
                    uint32_t const size,
                    int32_t const *const arr) {
    if (!size)
        return;
    cb(arr[0]);
    void_map_array(cb, size - 1, arr + 1);
}

/* Merge sort */
void mergesort(ele_t **source) {
    ele_t *head = *source;
    ele_t *a = NULL;
    ele_t *b = NULL;

    if (head == NULL || head->list->next == (list_t)(&(Nil.list)))
        return;
    
    partition(head, &a, &b);

    mergesort(&a);
    mergesort(&b);

    *source = mergeLists(a, b);
}

void partition(ele_t *head, ele_t **front, ele_t **back) {

    ele_t *fast;
    ele_t *slow;

    if (head == NULL || head->list->next == (list_t)(&(Nil.list))) {
        *front = head;
        *back = NULL;
    }
    else {
        slow = head;
        fast = list_entry(head->list->next, ele_t, list);

        while(fast->list->next != NULL) {
            
            fast = list_entry(fast->list->next, ele_t, list);

            if (fast->list->next != NULL) {
                slow = list_entry(slow->list->next, ele_t, list);
                fast = list_entry(fast->list->next, ele_t, list);
            }
        }

        *front = head;
        *back = list_entry(slow->list->next, ele_t, list);
        slow->list->next = (list_t)(&(Nil.list));
    }

}

ele_t *mergeLists(ele_t *a, ele_t *b) {
    ele_t *mergedList = NULL;
    ele_t *tmp;

    if (a->list->next == NULL) {
        return b;
    }
    else if (b->list->next == NULL) {
        return a;
    }

    if (a->val <= b->val) {
        mergedList = a;
        tmp = mergeLists(list_entry(a->list->next, ele_t, list), b);
        mergedList->list->next = (list_t)(&(tmp->list));
    }
    else {
        mergedList = b;
        tmp = mergeLists(a, list_entry(b->list->next, ele_t, list));
        mergedList->list->next = (list_t)(&(tmp->list));
    }

    return mergedList;
}









/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define DATA_SIZE 10
#define NAME_MAX 65
#define NAME_MIN 90
#define SCORE_MAX 100
#define SCORE_MIN 1
#define RANd_MAX 2147483647

typedef struct _data data;

struct _data {
    char x;
    int y;
};

int cmp_data(const void *a, const void *b)
{
    return (((data *) a)->y > ((data *) b)->y) ? 1 : -1;
}
void print_data(data *arr, size_t count)
{
    for (int i = 0; i < count; i++)
        printf("x=%c, y=%d\n", (arr + i)->x, (arr + i)->y);
}




void print1_data(data *arr, size_t count)
{
    FILE *fp1;
    fp1=fopen("123.txt","a");
    if(fp1!=NULL){
    for (int i = 0; i < count; i++){
        printf("x=%c, y=%d\n", (arr + i)->x, (arr + i)->y);
        fprintf(fp1,"%c   %d\n",(arr+i)->x,(arr+i)->y);
     }
      fclose(fp1);
    }
    else 
     printf("open file error\n");
}

int main(int argc, char const *argv[])
{
    srand(time(NULL)); 
    
    data s[DATA_SIZE];

    
    for(int i = 0; i < DATA_SIZE; i++) {
      
        s[i].x = rand()%10;  //只產生A~J的字母
        s[i].x += 'A';
       // s[i].y = (SCORE_MAX - SCORE_MIN) * rand()/2147000000+1; bug在這裡！！  如果是/的話 會造成rand只有輸出+號後面的數字 出來會是都為1
    for(int j=0;j<i;j++)
    {
      if(s[i].x==s[j].x)
      {
      i--;
      break;
      } 
    }
}
    for(int k=0;k<DATA_SIZE;k++)
     s[k].y = (SCORE_MAX - SCORE_MIN) * rand()%25+25; //不產生負數
     printf("init\n");
     print_data(s, DATA_SIZE);
     
     qsort(s, DATA_SIZE, sizeof(s[0]), cmp_data);
     printf("sorted\n");
     print1_data(s, DATA_SIZE);
    
    return 0;
}
*/
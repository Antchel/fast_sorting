#ifndef TEST_TASK_H_INCLUDED
#define TEST_TASK_H_INCLUDED

using namespace std;

int get_array_length();

int *get_array_data(int16_t n);

void sort_array(int16_t n, int *a);


int get_array_length ()
{
    int16_t n;
    cout << "Enter array size ";
    cin >> n;
    if (n<=0)
    {
        cout<<"Wrong array length, repeat enter "<<endl;
        cin >> n;
    }
    return n;
}
int *get_array_data(int16_t n)
{
    int *a;
    cout << "Enter array elements ";
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    return a;
}
void sort_array(int16_t n, int *a)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           int pos = i;
           int tmp = a[i];
           for(int j=i+1;j<n;j++)
            {
               if(a[j]<tmp and a[j]%2==0)
                    {
                        pos=j;
                        tmp=a[j];
                    }
            }
           a[pos]=a[i];
           a[i]=tmp;
           cout << a[i] << " " ;
       }
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]%2!=0)
       {
           int pos = i;
           int tmp = a[i];
           for(int j=i+1;j<n;j++)
           {
               if(a[j]>tmp and a[j]%2!=0)
               {
                    pos=j;
                    tmp=a[j];
                }
           }
               a[pos]=a[i];
               a[i]=tmp;
               cout << a[i] << " " ;
       }
   }
}

#endif // TEST_TASK_H_INCLUDED

int linear_searching(const std::vector<double> &A, double x)
{
/*
searching given number x in vector
return index of first matching element
(-1 - no element)
*/

    for (int i=0;i<A.size();i++){
        if (A[i]==x)return i+1;
    }
    return -1;
}

int binary_searching(const std::vector<double> &A, double x)
{
/*
searching given number x only in sorting vector
return index of last matching element
(-1 - no element)
asymptoticity - log(N)
*/
    int left = 0;
    int right = A.size()-1;

    while (left <= right){
        int middle = left + (right-left)/2;

        if (A[middle] == x)
            return middle;
        else if (x < A[middle])
            right = middle-1;
        else
            left = middle+1;
    }
    return -1;
}

void choise_sort(std::vector<double> &A)
{
/*
sorts a vector with asymptoticity N**2
*/
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            if (A[i]>A[j])
                std::swap(A[i],A[j]);
        }
    }
}

void bubble_sort(std::vector<double> &A)
{
/*
sorts a vector with asymptoticity N**2
*/
    bool is_sorted = false;

    while (is_sorted == false){
        int i=0;
        is_sorted = true;

        while (i<A.size()-1){
            if (A[i] > A[i+1]){
                double tmp = A[i];
                A[i] = A[i+1];
                A[i+1] = tmp;
                is_sorted = false;
            }
            i++;
        }
    }
}


void insert_sort(std::vector<double> &A)
{
/*
sorts a vector with asymptoticity ~N**2
*/
    for (int i=1;i<A.size();i++)
    {
        while (i>0 and A[i-1]>A[i])
        {
            double tmp = A[i];
            A[i]=A[i-1];
            A[i-1]=tmp;
            i--;
        }
    }
}


void counting_sort(std::vector<int> &A)
{
/*
special sorting (only positive integers)
with asymptoticity ~N
*/
    int max_el=-1;
    for(auto &i: A){
        if(i>max_el) max_el = i;
    }

    std::vector<int> counters;

    counters.resize(max_el+1);
    for(int i=0;i<max_el;i++) counters[i] = 0;

    for(auto &i: A){
        if (i<0) exit(-1);
        counters[i]++;
    }
    int n = 0;
    for(int i=0;i<=max_el;i++){
        for(int x=0;x<counters[i];x++){
            A[n] = i;
            n++;
        }
    }
}

/*
void merge_sort(std::vector<double> &A)
{
    to do

} */


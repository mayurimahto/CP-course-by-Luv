int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b;
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin>> a>>b;
    
    for(int i=a-1; i<b; i++){
        if(i<9){
            cout<<arr[i]<<endl;
        }
        else if(((i+1)%2 == 0)){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
        
    }
}
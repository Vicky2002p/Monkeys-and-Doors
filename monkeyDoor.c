#include <stdio.h>
const int num = 100;
const int a = 1;

int main(){
    char door[num];
    int monkey[num];
    int answer=0;
    
    for(int i = 1;i<=num;i++){
        door[i-a] = 'c';
        monkey[i-a] = 0;
    }
    
    for(int m = 1;m<=num;m++){
        for(int d = m;d<=num;d+=m){
            if(monkey[d-a]%m == 0){
                if(door[d-a] == 'c'){
                    door[d-a] = 'o';
                }else if(door[d-a] == 'o'){
                    door[d-a] = 'c';
                }
            }
        }
    }
    
    for(int i = 1;i<=num;i++){
        if(door[i-a] == 'o'){
            answer++;
        }
    }
    printf("The number of door open are: %d", answer);
    

    return 0;
}

#include<stdio.h>
int main(int argc,char *argv[]){
int i=0;
// Go through each string in argv
// Why to skip argv[0]

for (i=1;i<argc; i++){
printf("\narg %d:%s\n", i, argv[i]);
}


char *states[]={
"California", "Oregon",
 "Washington", "Texas"
};
int num_states=4;
for(i=0; i<num_states; i++){
states[i]=argv[i];
printf("\nState%d: %s\n", i, states[i]);

}
return 0;
}

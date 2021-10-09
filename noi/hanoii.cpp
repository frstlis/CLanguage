#include <iostream>
#include <string>
using namespace std;
// Function prototype
void moveDisks(int, string, string, string);
int main(){
    int n;
    cin>>n;
    // Play the game with 3 disks
    moveDisks (n, "peg 1", "peg 3", "peg 2");
    cout << "All the disks have been moved!"<<endl;
    return 0;
}
void moveDisks(int n, string source, string dest, string temp)
{
    if (n > 0)
    {
        // Move n-1 disks from source to temp
        // using dest as the temporary peg
        moveDisks(n-1, source, temp, dest);
       
        // Move a disk from source to dest
        cout << "Move a disk from " << source << " to " << dest << endl;
       
        // Move n-1 disks from temp to dest
        // using.source as the temporary peg
        moveDisks(n-1, temp, dest, source);
    }
}
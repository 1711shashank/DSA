Public class TowerOfHanoi
{
    public void hanoi(int n, char source, char auxilary, char destination){
        if(n>0){
            this.hanoi(n-1, source,destination,auxilary);
            System.out.println("Disk "+n "moved from rod "+source+" to rod "+destination);
            this.hanoi(n-1,auxilary,source,destination);
        }
    }
}
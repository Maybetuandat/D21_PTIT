chopticks
void philosophier(int i)
{

    for(; ;)
    {
        wait(choptick[i]); // nha triet gia lay dua o vi tri i
        wait(choptick[(i + 1) % 5])// nha triet gia lay dua o vi tri i + 1
        <an>
        signal(choptick[(i + 1) % 5])
        signal(choptick(i))
        <suy nghi>
    }


}
void main()
{
    choptick[0] = chopticks// gan tat ca chopticks = false
    startprocees(philosophier(1))
    ...
    startprocees(philosophier(5))
}
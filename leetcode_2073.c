int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int count=0;

    for(int i=0;;i=(i+1)%ticketsSize)
    {
        if(tickets[k]==0)
        {
            return count;
        }
        else if(tickets[i]>0)
        {
            tickets[i]=tickets[i]-1;
            count++;
        }
    }
    return count;
}
int heightChecker(int* heights, int heightsSize){
    int result = 0;

    int max_height = 102;
    int* counter = (int*) calloc(max_height, sizeof(int));

    for(int i=0; i<heightsSize; i++)
        counter[heights[i]]++;

    int pos = 1;
    for(int i=0; i<heightsSize; i++)
    {
        while(counter[pos]==0)
            pos++;

        if(heights[i] != pos)
            result++;

        counter[pos]--;
    }
    return result;
}
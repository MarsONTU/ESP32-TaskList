void Task_List()
{
    // enable FreeRTos trace facility and FreeRTos stats formatting functions in menuconfig before use!
    char ptrTaskList[500];
    vTaskList(ptrTaskList);
    printf("**********************************************\n");
    printf("Task        State    Prio       Stack   Num\n");
    printf("**********************************************\n");
    printf(ptrTaskList);
    printf("**********************************************\n");
}

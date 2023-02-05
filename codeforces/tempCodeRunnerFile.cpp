            if(sideBySide){
                arr[index] = 1;
                arr[index+1] = 1;
            }else if(cornerRight){
                arr[index] = 1;
            }else if(random){
                arr[index] = 1;
                arr[index+1] = -1;
            }else{
                arr[0] = -1;
                arr[1] = -1;
            }
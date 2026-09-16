class ParkingSystem {
public:

int b_space=0;
int m_space=0;
int s_space=0;

    ParkingSystem(int big, int medium, int small) {
        b_space=big;
        m_space=medium;
        s_space=small;
    }
    
    bool addCar(int carType) {
        int x=carType;
        if(x==1){
            if(b_space>0){
                b_space--;
                return true;
                
            }else{
                return false;
            }
        }else if(x==2){
            if(m_space!=0){
                m_space--;
                return true;
            }else{
                return false;
            }
        }else if(x==3){
            if(s_space!=0){
                s_space--;
                return true;
            }else{
                return false;
            }
        }return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
class SeatManager {

    int marker;
    set <int> availableSeats;

public:

    SeatManager(int n) {
        marker = 1;
    }
    
    int reserve() {
        if(!availableSeats.empty()){
            int seatNumber = *availableSeats.begin();
            availableSeats.erase(availableSeats.begin());
            return seatNumber;
        }
        int seatNumber = marker;
        marker++;
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        availableSeats.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
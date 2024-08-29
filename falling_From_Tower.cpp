

void BallHeight(double& meters) {

    double seconds {0};
    double distanceFallen {};
    const double gravity {9.8};


    for(seconds; distanceFallen >= 0; ++seconds) {

        distanceFallen = meters - (gravity * pow(seconds, 2) / 2);

        if (distanceFallen <= 0) {
            cout << "At "
            << seconds << " seconds, the ball is on the ground.\n";
        } else {

        cout << "At " << seconds << " seconds, " << "the ball is at height: "
        << distanceFallen << " meters" << '\n';

        }

    }

}


int main() {

    double meters {};
    cout << "Enter the height of the tower in meters: ";
    cin >> meters;

    BallHeight(meters);



}


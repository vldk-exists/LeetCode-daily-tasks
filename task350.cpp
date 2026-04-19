/*
A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n.

The bus goes along both directions i.e. clockwise and counterclockwise.

Return the shortest distance between the given start and destination stops.
*/

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        const int n = distance.size();
        int minDist = INT_MAX;
        
        for (int i = start, dist = 0;;) {
            int j = i+1;
            if (i == n-1) j = 0;

            dist += distance[i];
            
            if (j == destination) {
                minDist = min(minDist, dist);
                break;
            }
            
            ++i;
            if (i == n) i = 0;
        }

        for (int i = start, dist = 0;;) {
            int j = i;
            
            if (i == 0) i = n-1;
            else --i;

            dist += distance[i];

            if (i == destination) {
                minDist = min(minDist, dist);
                break;    
            }
        }

        return minDist;
    }
};

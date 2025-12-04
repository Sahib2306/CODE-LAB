public class MultiDimensionalArray {
    public static void main(String[] args) {
        int [][] flats = {{101,102,103},{201,202,203}}; //A 2-D Array
        
        //Displaying an 2-D Array
        for(int i =0; i<flats.length;i++){
            for(int j=0;j<flats[i].length;j++){
                System.out.print(flats[i][j]);
                System.out.print(" ");//gives space
            }
            System.out.println("");//moves to a new line
        }
    }
}

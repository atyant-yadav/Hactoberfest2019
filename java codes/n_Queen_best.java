import java.util.ArrayList;
import java.util.List;

public class nQueens_best {

    public static boolean isSafe(boolean[][] box, int r, int c) {
        int dir[][] = { { -1, 0 }, { 0, -1 }, { -1, 1 }, { -1, -1 } };
        for (int[] d : dir) {
            for (int rad = 1; rad <= box.length; rad++) {
                int x = r + rad * d[0];
                int y = c + rad * d[1];

                if (x >= 0 && x < box.length && y >= 0 && y < box.length && box[x][y])
                    return false;
            }
        }
        return true;
    }

    public static int nQueens(boolean[][] box, int row, int tnq, List<Integer> res, List<List<String>> list) {
        if (tnq == 0 || row == box.length) {
            if (tnq == 0) {
                // System.out.println(ans);
                List<String> temp = new ArrayList<>();

                for (int i = 0; i < res.size(); i++) {
                    String t = "";
                    for (int j = 0; j < res.size(); j++) {
                        if (j == res.get(i))
                            t = t + "Q";
                        else
                            t = t + ".";
                    }
                    temp.add(t);
                    System.out.println(t);
                }
                System.out.println("\n\n");
                list.add(temp);
                return 1;
            }
            return 0;
        }
        int m = box[0].length;
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (isSafe(box, row, i)) {
                box[row][i] = true;
                res.add(i);
                count += nQueens(box, row + 1, tnq - 1, res, list);
                res.remove(res.size() - 1);
                box[row][i] = false;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        List<List<String>> list = new ArrayList<>();
        List<Integer> res = new ArrayList<>();
        System.out.println(nQueens(new boolean[5][5], 0, 5, res, list));
    }
}

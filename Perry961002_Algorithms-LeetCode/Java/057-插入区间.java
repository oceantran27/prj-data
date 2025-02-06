/**
 * Definition for an interval.
 * public class Interval {
 *     int start;
 *     int end;
 *     Interval() { start = 0; end = 0; }
 *     Interval(int s, int e) { start = s; end = e; }
 * }
 */
class Solution {
    public List<Interval> insert(List<Interval> intervals, Interval newInterval) {
        List<Interval> result = new ArrayList<>();
        if(intervals.size() == 0)  //�߽����
        {
            result.add(newInterval);
            return result;
        }
        int i = 0;
        while(i < intervals.size())
        {
            if(newInterval.end < intervals.get(i).start)  //�������ڵ�ǰ�������ߣ������������ʣ������ȫ���������
            {
                result.add(newInterval);
                while(i < intervals.size())
                    result.add(intervals.get(i++));
                return result;
            }
            else if(newInterval.start > intervals.get(i).end)  //��ǰ���������������ߣ�����ǰ��������
                result.add(intervals.get(i));
            else
            {
                //���ص�������������������ں�
                newInterval.start = Math.min(newInterval.start, intervals.get(i).start);
                newInterval.end = Math.max(newInterval.end, intervals.get(i).end);
            }
            i++;
        }
        result.add(newInterval);  //�������һ���������ص�ʱ�����Ҫ�����������
        return result;
    }
}

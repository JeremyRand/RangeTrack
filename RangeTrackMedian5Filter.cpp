#include "RangeTrackMedian5Filter.h"

void RangeTrackMedian5Filter::Filter(vector<long> & raw, vector<long> & filtered)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FC6 begin
{
	// segfault in this method


	// this should be handled by a reset() or a constructor... it's wasteful to do it always
	while(filtered.size() < 2)
	{
		//printf("filtered.size() is %d\n", filtered.size());
		filtered.push_back(0);
	}
	
	while( ((long)raw.size()) - ((long)filtered.size()) > 2)
	{
		//printf("raw=%d;filtered=%d;raw_indexes=[%d,%d]\n", raw.size(), filtered.size(), filtered.size()-2, filtered.size()+2);
		long values[] = {raw[filtered.size()-2], raw[filtered.size()-1], raw[filtered.size()], raw[filtered.size()+1], raw[filtered.size()+2]};
		opt_med5(values);
		filtered.push_back(values[2]);
	}
}
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FC6 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

/*
 * The following routines have been built from knowledge gathered
 * around the Web. I am not aware of any copyright problem with
 * them, so use it as you want.
 * N. Devillard - 1998
 */

/*----------------------------------------------------------------------------
   Function :   opt_med5()
   In       :   pointer to array of 5 pixel values
   Out      :   a pixelvalue
   Job      :   optimized search of the median of 5 pixel values
   Notice   :   found on sci.image.processing
                cannot go faster unless assumptions are made
                on the nature of the input signal.
 ---------------------------------------------------------------------------*/

pixelvalue RangeTrackMedian5Filter::opt_med5(pixelvalue * p)
{
    PIX_SORT(p[0],p[1]) ; PIX_SORT(p[3],p[4]) ; PIX_SORT(p[0],p[3]) ;
    PIX_SORT(p[1],p[4]) ; PIX_SORT(p[1],p[2]) ; PIX_SORT(p[2],p[3]) ;
    PIX_SORT(p[1],p[2]) ; return(p[2]) ;
}

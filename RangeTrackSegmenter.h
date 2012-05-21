#ifndef RangeTrackSegmenter_h
#define RangeTrackSegmenter_h

#include "RangeTrackLogger.h"
#include "RangeTrackSegmentData.h"


/*
 */
class RangeTrackSegmenter : public RangeTrackLogger
{

 public:

    RangeTrackSegmenter(RangeTrackPositionReader *position_reader_x, RangeTrackPositionReader *position_reader_y, RangeTrackPositionReader *position_reader_theta, RangeTrackRangeReader *range_reader, RangeTrackFilter *range_filter, RangeTrackFilter *slope_filter, RangeTrackFilter *concavity_filter);

    virtual short GetNumSegments();

    virtual short GetMinRange();

    virtual short GetMaxRange();

    virtual long GetMinAngle();

    virtual long GetMaxAngle();

    virtual long GetMinAngleConcavity();

    virtual long GetMaxAngleConcavity();

    virtual void SetMinRange(short value);

    virtual void SetMaxRange(short value);

    virtual void SetMinAngle(long value);

    virtual void SetMaxAngle(long value);

    virtual void SetMinAngleConcavity(long value);

    virtual void SetMaxAngleConcavity(long value);

    virtual int GetStartIndex(int segment);

    virtual int GetEndIndex(int segment);

	virtual bool PointValid(int index);

    virtual void UpdateSegment();

    virtual void UpdateAll();

    virtual void Reset();

    virtual void DumpSegment(const char filename[]);

 protected:
    vector<RangeTrackSegmentData> m_segments;

 private:
	int m_process_index;

    short m_min_range;
    short m_max_range;
    //long m_min_width_range;
    long m_min_slope;
    long m_max_slope;
    //long m_min_width_slope;
    long m_min_concavity;
    long m_max_concavity;
    //long m_min_width_concavity;
	long m_min_angle;
    long m_max_angle;
    //long m_min_width_angle;
    long m_segment_tolerance; // Distance between segments at which the segments will be merged.  Not at all sure if this is useful, so remains unimplemented.
	long m_range_tolerance;


};

#endif // RangeTrackSegmenter_h

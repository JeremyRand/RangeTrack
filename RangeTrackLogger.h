#ifndef RangeTrackLogger_h
#define RangeTrackLogger_h

#include "RangeTrackFilter.h"
#include "RangeTrackPositionReader.h"
#include "RangeTrackRangeReader.h"
#include <iostream>
#include <vector>


/*
 *
 */
class RangeTrackLogger
{

 public:

	RangeTrackLogger(RangeTrackPositionReader *position_reader_x, RangeTrackPositionReader *position_reader_y, RangeTrackPositionReader *position_reader_theta, RangeTrackRangeReader *range_reader, RangeTrackFilter *range_filter, RangeTrackFilter *slope_filter, RangeTrackFilter *concavity_filter);

    virtual void SetPositionReaderX(RangeTrackPositionReader* reader);
	virtual void SetPositionReaderY(RangeTrackPositionReader* reader);
	virtual void SetPositionReaderTheta(RangeTrackPositionReader* reader);

    virtual void SetRangeReader(RangeTrackRangeReader* reader);

    virtual void SetAllFilter(RangeTrackFilter* filter);

    virtual void SetRangeFilter(RangeTrackFilter* filter);

    virtual void SetSlopeFilter(RangeTrackFilter* filter);

    virtual void SetConcavityFilter(RangeTrackFilter* filter);

    virtual void Reset();

    virtual void UpdateLog();

	virtual void UpdatePointStats();

    virtual void UpdateAll();

    virtual void DumpLog(const char filename[]);

    virtual RangeTrackPositionReader* GetXReader();
    virtual RangeTrackPositionReader* GetYReader();
    virtual RangeTrackPositionReader* GetThetaReader();

 protected:
    vector<long> m_x_positions;
	vector<long> m_y_positions;
	vector<long> m_theta_positions;
    vector<long> m_ranges;
    vector<long> m_filtered_ranges;
    vector<long> m_slopes; // maybe remove this
    vector<long> m_filtered_slopes; // maybe remove this
    vector<long> m_concavities; // maybe remove this
    vector<long> m_filtered_concavities; // maybe remove this
    vector<long> m_point_x_positions;
    vector<long> m_point_y_positions;
    vector<long> m_point_slopes; // maybe remove this
    vector<long> m_point_concavities; // maybe remove this
    vector<long> m_point_angle_slopes;
    vector<long> m_point_angle_concavities;

 private:
    RangeTrackPositionReader* m_position_reader_x;
	RangeTrackPositionReader* m_position_reader_y;
	RangeTrackPositionReader* m_position_reader_theta;
    RangeTrackRangeReader* m_range_reader;
    RangeTrackFilter* m_range_filter;
    RangeTrackFilter* m_slope_filter;
    RangeTrackFilter* m_concavity_filter;

};

#endif // RangeTrackLogger_h

#ifndef RangeTrackAnalyzer_h
#define RangeTrackAnalyzer_h

#include "RangeTrackSegmenter.h"

class RangeTrackAnalyzer : public RangeTrackSegmenter
{

 public:

    RangeTrackAnalyzer(RangeTrackPositionReader *position_reader_x, RangeTrackPositionReader *position_reader_y, RangeTrackPositionReader *position_reader_theta, RangeTrackRangeReader *range_reader, RangeTrackFilter *range_filter, RangeTrackFilter *slope_filter, RangeTrackFilter *concavity_filter);

    int GetSegmentStartPositionX(int segment);

    int GetSegmentStartPositionY(int segment);

    int GetSegmentStartPositionTheta(int segment);

    int GetSegmentEndPositionX(int segment);

    int GetSegmentEndPositionY(int segment);

    int GetSegmentEndPositionTheta(int segment);

    int GetSegmentLengthPositionX(int segment);

    int GetSegmentLengthPositionY(int segment);

    int GetSegmentLengthPositionTheta(int segment);

    int GetSegmentStartPointX(int segment);

    int GetSegmentStartPointY(int segment);

    int GetSegmentEndPointX(int segment);

    int GetSegmentEndPointY(int segment);

    int GetSegmentLengthPointX(int segment);

    int GetSegmentLengthPointY(int segment);

    int GetSegmentLengthPointChord(int segment);

    int GetSegmentLengthPointArc(int segment);

    short GetSegmentMinRange(int segment);

    short GetSegmentMaxRange(int segment);

    short GetSegmentMeanRange(int segment);

    int GetSegmentMeanAngleSlope(int segment);

    // BEGIN code to rewrite

    virtual int GetSpreadSlope();

    virtual int GetMeanConcavity();

    virtual int GetSpreadConcavity();

    // END code to rewrite

    virtual int DumpAnalyze();

    void AddWall(double x1, double y1, double x2, double y2);
    void RotateWalls(double rotation);
    void ComputeLocalizationStats(double &out_mean_x, double &out_mean_y, double &out_mad_x, double &out_mad_y);
    void ComputeLocalizationStatsWithAngle(double rotation_init, double rotation_step, double rotation_range, double &out_rotation, double &out_mean_x, double &out_mean_y, double &out_mad_x, double &out_mad_y);
    void VectorToNearestWall(double point_x, double point_y, double &vector_x, double &vector_y);
    double VectorXPointToSegment(double x, double y, double x1, double y1, double x2, double y2);
    double VectorYPointToSegment(double x, double y, double x1, double y1, double x2, double y2);
    int Obtuse(double angle1, double angle2);
    double PointsToAngle(double x1, double y1, double x2, double y2);
    double NormalizeAngle(double angle);
    double RotatePointX(double x, double y, double theta);
    double RotatePointY(double x, double y, double theta);

protected:

    double m_wall_rotation;

    vector<double> m_walls_x1;
    vector<double> m_walls_x2;
    vector<double> m_walls_y1;
    vector<double> m_walls_y2;

    vector<double> m_walls_rotated_x1;
    vector<double> m_walls_rotated_x2;
    vector<double> m_walls_rotated_y1;
    vector<double> m_walls_rotated_y2;

};

#endif // RangeTrackAnalyzer_h

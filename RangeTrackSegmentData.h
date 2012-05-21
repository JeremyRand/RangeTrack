#ifndef RangeTrackSegmentData_h
#define RangeTrackSegmentData_h


class RangeTrackSegmentData
{

 public:

    RangeTrackSegmentData();

    virtual int GetStartIndex();

    virtual int GetEndIndex();

    virtual bool GetClosed();

    virtual void SetStartIndex(short index);

    virtual void SetEndIndex(short index);

    virtual void SetClosed(bool closed);


 private:
    short m_start_index;
    short m_end_index;
    bool m_closed;

};

#endif // RangeTrackSegmentData_h

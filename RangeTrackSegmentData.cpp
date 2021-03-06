#include "RangeTrackSegmentData.h"

RangeTrackSegmentData::RangeTrackSegmentData()
{
    m_start_index = m_end_index = 0;
    m_closed = false;
}

int RangeTrackSegmentData::GetStartIndex()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001141 begin
{
    return(m_start_index);
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001141 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

int RangeTrackSegmentData::GetEndIndex()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001143 begin
{
    return(m_end_index);
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001143 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

bool RangeTrackSegmentData::GetClosed()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001145 begin
{
    return m_closed;
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001145 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void RangeTrackSegmentData::SetStartIndex(short index)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001147 begin
{
    m_start_index = index;
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:0000000000001147 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void RangeTrackSegmentData::SetEndIndex(short index)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:000000000000114A begin
{
    m_end_index = index;
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:000000000000114A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void RangeTrackSegmentData::SetClosed(bool closed)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-8-45c899e5:124a28211a8:-8000:000000000000114D begin
{
    m_closed = closed;
}
// section -64--88-1-8-45c899e5:124a28211a8:-8000:000000000000114D end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

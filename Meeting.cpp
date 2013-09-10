/*---Meeting.cpp--------------------------
 * Meeting definition
 *-----------------------------------*/
 
 #include "Meeting.h"
 #include <stdio.h>
 //���캯�� 
 Meeting::Meeting( string s, string p, Date st, Date et, string t )
 {
    sponsor = s;
    participator = p;
    startDate = st;
    endDate = et;
    title = t;
 }
 
 	string Meeting::getSponsor( )
 	{
        return sponsor;        
    }
    
	void Meeting::setSponsor(string s)
	{
        sponsor = s;    
    }

	string Meeting::getParticipator( ) 
	{
        return participator;   
    }
	void Meeting::setParticipator(string p)
	{
        participator = p;    
    }

	Date Meeting::getStartDate( ) 
	{
        return startDate;    
    }
    
	void Meeting::setStartDate(Date st)
	{
        startDate = st;    
    }

	Date Meeting::getEndDate( )
	{
        return endDate;    
    }
    
	void Meeting::setEndDate(Date et)
	{
        endDate = et;   
    }

	string Meeting::getTitle( ) 
	{
        return title;
    }
    
	void Meeting::setTitle(string t)
	{
        title = t;    
    }

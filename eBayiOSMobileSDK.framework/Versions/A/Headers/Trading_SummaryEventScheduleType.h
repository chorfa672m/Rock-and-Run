//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about a summary event schedule.
 
 
 @ingroup Trading
*/
@interface Trading_SummaryEventScheduleType : NSObject <EbayNs_Bindable> {

@private
    NSString *eventType;
    NSString *summaryPeriod;
    NSString *frequency;

}


/**
 
 The event type associated with this alert.
 
 
 type: string constant in Trading_NotificationEventTypeCodeType.h
*/
@property (nonatomic, retain) NSString *eventType;

/**
 
 The period of time for which to create a summary.
 
 
 type: string constant in Trading_SummaryWindowPeriodCodeType.h
*/
@property (nonatomic, retain) NSString *summaryPeriod;

/**
 
 How often the summary is to be delivered.
 
 
 type: string constant in Trading_SummaryFrequencyCodeType.h
*/
@property (nonatomic, retain) NSString *frequency;



@end

//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_PaginationType;

/**
 
 Retrieves the accumulated feedback left for a specified user, or the summary
 feedback data for a specific transaction or item.
 
 
 @ingroup Trading
*/
@interface Trading_GetFeedbackRequestType : Trading_AbstractRequestType {

@private
    NSString *userID;
    NSString *feedbackID;
    NSString *itemID;
    NSString *transactionID;
    NSMutableArray *commentType;
    NSString *feedbackType;
    Trading_PaginationType *pagination;

}


/**
 
 Specifies the user whose feedback data is to be returned. If not specified,
 then the feedback returned is for the requesting user.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userID;

/**
 
 An ID that uniquely identifies a feedback record to be retrieved.
 Used only by the Feedback notification.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *feedbackID;

/**
 
 The ID of the item that you want feedback data about. If not specified,
 feedback for all items is returned. Note that when you specify this ItemID
 field, the response is also changed as follows: any FeedbackType filter you
 specify is ignored; the maximum number of feedback records returned is 100; and
 the Pagination input fields are ignored.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Transaction ID whose feedback record you want to inspect. If not specified,
 then the feedback for all transactions are returned. When a Transaction ID
 is specified, since only one record is returned, pagination values are ignored.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 Returns feedback of a specified type (positive, negative, or neutral) in a
 FeedbackDetailArray. You can include two CommentTypes in your call if you want
 to exclude the third type from your results. If no CommentType is specified,
 all of the feedback types are returned.
 
 
 entry type : string constant in Trading_CommentTypeCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *commentType;

/**
 
 Returns feedback that you received as a buyer or seller, or feedback you left
 for others (as either a buyer or a seller). You can include only one
 FeedbackType in your call. If no FeedbackType is specified, all of the
 available feedback is returned.
 
 
 type: string constant in Trading_FeedbackTypeCodeType.h
*/
@property (nonatomic, retain) NSString *feedbackType;

/**
 
 Controls the pagination of the result set. Child elements, EntriesPerPage and
 PageNumber, specify the maximum number of individual feedback records to return
 per call and which page of data to return. Only applicable if DetailLevel is
 set to ReturnAll and the call is returning feedback for a User ID. Feedback
 summary data is not paginated, but when pagination is used, it is returned
 after the last feedback detail entry.
 <br><br>
 Valid Pagination.EntriesPerPage input for GetFeedback is limited to 25 (the
 default), 50, 100, and 200. If you specify a value of zero or less, or a value
 greater than 200, the call fails with an error. If you specify a value between
 one and twenty-four, the value is rounded up to 25. Values between 26 and 199
 that are not one of the accepted values are rounded down to the nearest
 accepted value.
 
 
 type : class Trading_PaginationType
*/
@property (nonatomic, retain) Trading_PaginationType *pagination;


@end

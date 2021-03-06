//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 These are the codes used to specify the type of feedback/comments in a single feedback record. Additional information about feedback is available in the
 online Help of the eBay website.
 
 
 @ingroup Trading
*/

/**
 
 Positive feedback. Increases total feedback score.
 
*/
extern NSString *const Trading_CommentTypeCodeType_POSITIVE;

/**
 
 Neutral feedback. No effect on total feedback score.
 
*/
extern NSString *const Trading_CommentTypeCodeType_NEUTRAL;

/**
 
 Negative feedback. Decreases total feedback score.
 
*/
extern NSString *const Trading_CommentTypeCodeType_NEGATIVE;

/**
 
 Withdrawn feedback. Removes the effect of the original
 feedback on total feedback score. Comments from withdrawn feedback
 are still visible.
 
*/
extern NSString *const Trading_CommentTypeCodeType_WITHDRAWN;

/**
 
 Applies to the eBay Motors site only. Feedback is withdrawn based on
 the decision of a third party.
 
*/
extern NSString *const Trading_CommentTypeCodeType_INDEPENDENTLY_WITHDRAWN;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_CommentTypeCodeType_CUSTOM_CODE;
  

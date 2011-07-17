//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Applicable to sites that support the Detailed Seller Ratings feature.
 The FeedbackRatingDetailCodeType is the list of areas for detailed seller ratings. When buyers leave an overall Feedback rating (positive, neutral, or negative) for a seller, they also can leave ratings in four areas: item as described, communication, shipping time, and charges for shipping and handling. Users retrieve detailed ratings as averages of the ratings left by buyers. 
 
 
 @ingroup Shopping
*/

/**
 
 Detailed seller rating in the area of "item as described."
 
*/
extern NSString *const Shopping_FeedbackRatingDetailCodeType_ITEM_AS_DESCRIBED;

/**
 
 Detailed seller rating in the area of "communication."
 
*/
extern NSString *const Shopping_FeedbackRatingDetailCodeType_COMMUNICATION;

/**
 
 Detailed seller rating in the area of "shipping time." Inapplicable to 
 motor vehicle items.
 
*/
extern NSString *const Shopping_FeedbackRatingDetailCodeType_SHIPPING_TIME;

/**
 
 Detailed seller rating in the area of "charges for shipping and handling."
 Inapplicable to motor vehicle items. 
 
*/
extern NSString *const Shopping_FeedbackRatingDetailCodeType_SHIPPING_AND_HANDLING_CHARGES;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Shopping_FeedbackRatingDetailCodeType_CUSTOM_CODE;
  
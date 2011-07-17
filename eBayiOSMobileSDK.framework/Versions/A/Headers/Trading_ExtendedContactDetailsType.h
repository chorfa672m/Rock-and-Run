//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_ContactHoursDetailsType;

/**
 
 Contains extended contact information for an eBay user.
 
 
 @ingroup Trading
*/
@interface Trading_ExtendedContactDetailsType : NSObject <EbayNs_Bindable> {

@private
    Trading_ContactHoursDetailsType *contactHoursDetails;
    NSNumber *classifiedAdContactByEmailEnabled;
    NSString *payPerLeadPhoneNumber;

}


/**
 
 All fields related to contact hours including time ranges and
 user-designated time zone.
 
 
 type : class Trading_ContactHoursDetailsType
*/
@property (nonatomic, retain) Trading_ContactHoursDetailsType *contactHoursDetails;

/**
 
 Returned for classified ads to indicate whether contact by email is enabled.
 In the pay-per-lead feature, which will be available in upcoming months on the
 US site, this field will specify whether potential buyers can email the seller
 after viewing a pay-per-lead listing.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *classifiedAdContactByEmailEnabled;

/**
 
 A phone number assigned by eBay and provided to
 potential buyers when they are viewing a pay-per-lead listing.
 If a potential buyer (a lead) makes a call to this number,
 eBay routes the call to the seller based on
 inputs made by the seller when the seller lists the item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *payPerLeadPhoneNumber;



@end
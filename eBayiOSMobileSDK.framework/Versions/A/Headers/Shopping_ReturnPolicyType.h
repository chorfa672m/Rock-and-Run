//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Type for the return policy details of an item.
 
 
 @ingroup Shopping
*/
@interface Shopping_ReturnPolicyType : NSObject <EbayNs_Bindable> {

@private
    NSString *refund;
    NSString *returnsWithin;
    NSString *returnsAccepted;
    NSString *description;
    NSString *warrantyOffered;
    NSString *warrantyType;
    NSString *warrantyDuration;
    NSString *ean;
    NSString *shippingCostPaidBy;

}


/**
 
 Specifies how a refund will be made, e.g. as an exchange.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *refund;

/**
 
 Specifies the length of time in which the item must be returned
 under the return policy.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *returnsWithin;

/**
 
 Information about returns accepted.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *returnsAccepted;

/**
 
 A description of the return policy for the item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Information about the warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *warrantyOffered;

/**
 
 The type of warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *warrantyType;

/**
 
 The length of the warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *warrantyDuration;

/**
 
 Contains the EAN.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *ean;

/**
 
 The party who pays the cost of shipping for a returned item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingCostPaidBy;



@end
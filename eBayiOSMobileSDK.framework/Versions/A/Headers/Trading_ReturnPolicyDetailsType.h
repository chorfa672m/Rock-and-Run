//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_WarrantyDurationDetailsType;
@class Trading_ShippingCostPaidByDetailsType;
@class Trading_ReturnsWithinDetailsType;
@class Trading_WarrantyTypeDetailsType;
@class Trading_RefundDetailsType;
@class Trading_WarrantyOfferedDetailsType;
@class Trading_ReturnsAcceptedDetailsType;

/**
 
 Type for the return policy details of an item.
 
 
 @ingroup Trading
*/
@interface Trading_ReturnPolicyDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *refund;
    NSMutableArray *returnsWithin;
    NSMutableArray *returnsAccepted;
    NSNumber *description;
    NSMutableArray *warrantyOffered;
    NSMutableArray *warrantyType;
    NSMutableArray *warrantyDuration;
    NSNumber *ean;
    NSMutableArray *shippingCostPaidBy;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 How the seller will compensate the buyer for a returned item
 (such as money back or exchange).
 
 
 entry type : class Trading_RefundDetailsType
*/
@property (nonatomic, retain) NSMutableArray *refund;

/**
 
 Time period within which the buyer can return the item, starting from the day they receive the item.
 
 
 entry type : class Trading_ReturnsWithinDetailsType
*/
@property (nonatomic, retain) NSMutableArray *returnsWithin;

/**
 
 Whether the seller allows the buyer to return the item.
 
 
 entry type : class Trading_ReturnsAcceptedDetailsType
*/
@property (nonatomic, retain) NSMutableArray *returnsAccepted;

/**
 
 If true, the site supports a text description of the seller's return policy.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *description;

/**
 
 Whether the item includes a warranty.
 
 
 entry type : class Trading_WarrantyOfferedDetailsType
*/
@property (nonatomic, retain) NSMutableArray *warrantyOffered;

/**
 
 The type of warranty offered.
 
 
 entry type : class Trading_WarrantyTypeDetailsType
*/
@property (nonatomic, retain) NSMutableArray *warrantyType;

/**
 
 The length of the warranty offered.
 
 
 entry type : class Trading_WarrantyDurationDetailsType
*/
@property (nonatomic, retain) NSMutableArray *warrantyDuration;

/**
 
 If true, the site supports specifying a European Article Number (EAN) with the return policy.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *ean;

/**
 
 The party who pays the shipping cost for a returned item.
 
 
 entry type : class Trading_ShippingCostPaidByDetailsType
*/
@property (nonatomic, retain) NSMutableArray *shippingCostPaidBy;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end

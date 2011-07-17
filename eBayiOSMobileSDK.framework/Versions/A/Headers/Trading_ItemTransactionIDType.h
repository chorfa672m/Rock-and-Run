//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 A container for item and transaction IDs.
 
 
 @ingroup Trading
*/
@interface Trading_ItemTransactionIDType : NSObject <EbayNs_Bindable> {

@private
    NSString *itemID;
    NSString *transactionID;
    NSString *sku;

}


/**
 
 The eBay Item ID of the listing associated with the transaction 
 being retrieved.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The ID of a transaction being retrieved.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 The SKU that the seller defined for the listing associated with the 
 transaction being retrieved.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;



@end
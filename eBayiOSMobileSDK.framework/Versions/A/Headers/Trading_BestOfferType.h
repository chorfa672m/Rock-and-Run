//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_UserType;
@class Trading_AmountType;

/**
 
 Details about a best offer.
 
 
 @ingroup Trading
*/
@interface Trading_BestOfferType : NSObject <EbayNs_Bindable> {

@private
    NSString *bestOfferID;
    NSDate *expirationTime;
    Trading_UserType *buyer;
    Trading_AmountType *price;
    NSString *status;
    NSNumber *quantity;
    NSString *buyerMessage;
    NSString *sellerMessage;
    NSString *bestOfferCodeType;
    NSString *callStatus;

}


/**
 
 An ID to distinguish this best offer from other best offers
 made on the item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *bestOfferID;

/**
 
 Date and time (in GMT) the offer naturally expires (if the
 seller has not accepted or declined the offer).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *expirationTime;

/**
 
 Information about the buyer who made the best offer.
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *buyer;

/**
 
 The amount of the best offer.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *price;

/**
 
 The state of the offer. In the case of 
 a PlaceOffer response that specified a best offer,
 Status may be "Accepted" if the best offer
 was at or above an auto-accept price.
 
 
 type: string constant in Trading_BestOfferStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The number of items for which the buyer is making an offer.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;

/**
 
 Text message that was provided by a buyer when placing a best offer.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerMessage;

/**
 
 Text response to buyer from seller.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerMessage;

/**
 
 The best offer type.
 
 
 type: string constant in Trading_BestOfferTypeCodeType.h
*/
@property (nonatomic, retain) NSString *bestOfferCodeType;

/**
 
 The status of the call, either Success or Failure.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *callStatus;



@end
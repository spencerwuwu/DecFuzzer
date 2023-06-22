#ifndef s394retdec_H
#define s394retdec_H

#include "w2c2_base.h"

typedef struct s394retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s394retdecInstance;

void f0(s394retdecInstance*);

void f1(s394retdecInstance*);

U32 f2(s394retdecInstance*);

void f3(s394retdecInstance*,U32);

U32 f4(s394retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s394retdecInstance*,U32,U32,U32,U32,U32);

void f6(s394retdecInstance*,U32);

void f7(s394retdecInstance*,U32,U32,U32);

void f8(s394retdecInstance*,U32,U32,U32);

void s394retdec____wasm_call_ctors(s394retdecInstance*i);

void s394retdec____wasm_apply_data_relocs(s394retdecInstance*i);

U32 s394retdec_func_1(s394retdecInstance*i);

void s394retdec_call_cb(s394retdecInstance*i,U32 l0);

void s394retdecInstantiate(s394retdecInstance* instance, void* resolve(const char* module, const char* name));

void s394retdecFreeInstance(s394retdecInstance* instance);

#endif /* s394retdec_H */


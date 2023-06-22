#ifndef s574retdec_H
#define s574retdec_H

#include "w2c2_base.h"

typedef struct s574retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s574retdecInstance;

void f0(s574retdecInstance*);

void f1(s574retdecInstance*);

U32 f2(s574retdecInstance*);

void f3(s574retdecInstance*,U32);

U32 f4(s574retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s574retdecInstance*,U32,U32,U32,U32,U32);

void f6(s574retdecInstance*,U32);

void f7(s574retdecInstance*,U32,U32,U32);

void f8(s574retdecInstance*,U32,U32,U32);

void s574retdec____wasm_call_ctors(s574retdecInstance*i);

void s574retdec____wasm_apply_data_relocs(s574retdecInstance*i);

U32 s574retdec_func_1(s574retdecInstance*i);

void s574retdec_call_cb(s574retdecInstance*i,U32 l0);

void s574retdecInstantiate(s574retdecInstance* instance, void* resolve(const char* module, const char* name));

void s574retdecFreeInstance(s574retdecInstance* instance);

#endif /* s574retdec_H */


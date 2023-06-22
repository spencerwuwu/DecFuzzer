#ifndef s870retdec_H
#define s870retdec_H

#include "w2c2_base.h"

typedef struct s870retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s870retdecInstance;

void f0(s870retdecInstance*);

void f1(s870retdecInstance*);

U32 f2(s870retdecInstance*);

void f3(s870retdecInstance*,U32);

U32 f4(s870retdecInstance*,U32,U32,U32);

void f5(s870retdecInstance*,U32,U32,U32,U32,U32);

void f6(s870retdecInstance*,U32);

void f7(s870retdecInstance*,U32,U32,U32);

void f8(s870retdecInstance*,U32,U32,U32);

void s870retdec____wasm_call_ctors(s870retdecInstance*i);

void s870retdec____wasm_apply_data_relocs(s870retdecInstance*i);

U32 s870retdec_func_1(s870retdecInstance*i);

void s870retdec_call_cb(s870retdecInstance*i,U32 l0);

void s870retdecInstantiate(s870retdecInstance* instance, void* resolve(const char* module, const char* name));

void s870retdecFreeInstance(s870retdecInstance* instance);

#endif /* s870retdec_H */


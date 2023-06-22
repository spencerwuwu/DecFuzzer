#ifndef s836retdec_H
#define s836retdec_H

#include "w2c2_base.h"

typedef struct s836retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s836retdecInstance;

void f0(s836retdecInstance*);

void f1(s836retdecInstance*);

U32 f2(s836retdecInstance*);

void f3(s836retdecInstance*,U32);

U32 f4(s836retdecInstance*,U32,U32,U32);

void f5(s836retdecInstance*,U32,U32,U32,U32,U32);

void f6(s836retdecInstance*,U32);

void f7(s836retdecInstance*,U32,U32,U32);

void f8(s836retdecInstance*,U32,U32,U32);

void s836retdec____wasm_call_ctors(s836retdecInstance*i);

void s836retdec____wasm_apply_data_relocs(s836retdecInstance*i);

U32 s836retdec_func_1(s836retdecInstance*i);

void s836retdec_call_cb(s836retdecInstance*i,U32 l0);

void s836retdecInstantiate(s836retdecInstance* instance, void* resolve(const char* module, const char* name));

void s836retdecFreeInstance(s836retdecInstance* instance);

#endif /* s836retdec_H */


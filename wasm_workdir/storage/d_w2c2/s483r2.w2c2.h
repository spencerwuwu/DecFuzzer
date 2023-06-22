#ifndef s483r2_H
#define s483r2_H

#include "w2c2_base.h"

typedef struct s483r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s483r2Instance;

void f0(s483r2Instance*);

void f1(s483r2Instance*);

U32 f2(s483r2Instance*);

void f3(s483r2Instance*,U32);

U32 f4(s483r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s483r2Instance*,U32,U32,U32,U32,U32);

void f6(s483r2Instance*,U32);

void f7(s483r2Instance*,U32,U32,U32);

void f8(s483r2Instance*,U32,U32,U32);

void s483r2____wasm_call_ctors(s483r2Instance*i);

void s483r2____wasm_apply_data_relocs(s483r2Instance*i);

U32 s483r2_func_1(s483r2Instance*i);

void s483r2_call_cb(s483r2Instance*i,U32 l0);

void s483r2Instantiate(s483r2Instance* instance, void* resolve(const char* module, const char* name));

void s483r2FreeInstance(s483r2Instance* instance);

#endif /* s483r2_H */


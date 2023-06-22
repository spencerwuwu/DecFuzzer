#ifndef s697r2_H
#define s697r2_H

#include "w2c2_base.h"

typedef struct s697r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s697r2Instance;

void f0(s697r2Instance*);

void f1(s697r2Instance*);

U32 f2(s697r2Instance*);

void f3(s697r2Instance*,U32);

U32 f4(s697r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s697r2Instance*,U32,U32,U32,U32,U32);

void f6(s697r2Instance*,U32);

void f7(s697r2Instance*,U32,U32,U32);

void f8(s697r2Instance*,U32,U32,U32);

void s697r2____wasm_call_ctors(s697r2Instance*i);

void s697r2____wasm_apply_data_relocs(s697r2Instance*i);

U32 s697r2_func_1(s697r2Instance*i);

void s697r2_call_cb(s697r2Instance*i,U32 l0);

void s697r2Instantiate(s697r2Instance* instance, void* resolve(const char* module, const char* name));

void s697r2FreeInstance(s697r2Instance* instance);

#endif /* s697r2_H */

